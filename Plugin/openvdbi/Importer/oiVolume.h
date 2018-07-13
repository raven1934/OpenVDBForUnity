#pragma once

class oiContext;
class oiVolumeData;
class oiVolumeSummary;

class oiVolume
{
public:
    oiVolume(const openvdb::FloatGrid& grid, const openvdb::Coord& extents);
    virtual ~oiVolume();

    void reset();
    void fillTextureBuffer(oiVolumeData& data) const;
    const oiVolumeSummary& getSummary() const;

    IArray<openvdbV4> m_values_ref;
    RawVector<openvdbV4> m_buf_values;
private:
    oiVolumeSummary* m_summary;
};